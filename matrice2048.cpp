#include "matrice2048.h"


matrice2048::matrice2048(QObject *parent) : QObject(parent)
{
    mat=new int*[4];
    mat_back=new int*[4];
    for (int i=0;i<4;i++){
        mat[i]=new int[4];
        mat_back[i]=new int[4];
    }
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++){
            mat[i][j]=0;
            mat_back[i][j]=0;
        }
    score=0;
    score_back=0;
    best_score=0;
    initial();
}

void matrice2048::GameInitial(){
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++){
            mat[i][j]=0;
            mat_back[i][j]=0;
        }
    score=0;
    score_back=0;
    initial();
}

void matrice2048::initial()
{
    srand((int)time(NULL));
    if (ismatricefull())
        ;//a modifier
    else{
        int ran_num=rand()%16;//生成一个0到15之间到随机数
        int ran_num2=rand()%16;//如果ran_num2==15,那么生成4，不然生成2
        while (mat[ran_num/4][ran_num%4] !=0)//如果这个位置不为0的话再生成一个
            ran_num=rand()%16;
        if(ran_num2==15)
            mat[ran_num/4][ran_num%4]=4;
        else
            mat[ran_num/4][ran_num%4]=2;//在这个位置生成2
        cptChanged();
    }
}

bool matrice2048::ismatricefull()
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(mat[i][j]==0)
                return 0;
    return 1;
}

void matrice2048::GetBack()
{
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat[i][j]=mat_back[i][j];
    score=score_back;
    cptChanged();
}

void matrice2048::Left()
{
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat_back[i][j]=mat[i][j];
    score_back=score;
    int flag=0;//判断矩阵有没有进行变化，1为变化，0为不变
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            if(mat[i][j]!=0){
                if(j<3 && mat[i][j]==mat[i][j+1]){//和右边那个相等
                    mat[i][j+1]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j+1];
                }
                else if(j<2 &&mat[i][j+1]==0 && mat[i][j]==mat[i][j+2]){//和右边第二个相等且中间那个为0
                    mat[i][j+2]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j+2];
                }
                else if(j<1 &&mat[i][j+1]==0 && mat[i][j+2]==0 && mat[i][j]==mat[i][j+3]){//和右边第二个相等且中间那个为0
                    mat[i][j+3]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j+3];
                }
            }
        }
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            if(mat[i][j]==0)
                continue;
            for(int j_change=0;j_change<j;){
                if(mat[i][j_change]!=0){
                    j_change++;
                    continue;
                }
                if(mat[i][j]!=0){
                    mat[i][j_change]=mat[i][j];
                    mat[i][j]=0;
                    j_change++;
                }
                if(j==3)
                    break;
                else{
                    j++;
                }
            }
        }
    if (flag==1 || flag==0)
        initial();
    cptChanged();

}

void matrice2048::Right()
{
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat_back[i][j]=mat[i][j];
    score_back=score;
    int flag=0;//判断矩阵有没有进行变化，1为变化，0为不变
    for(int i=0;i<4;i++)
        for(int j=3;j>=0;j--){
            if(mat[i][j]!=0){
                if(j>0 && mat[i][j]==mat[i][j-1]){//和右边那个相等
                    mat[i][j-1]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j-1];
                }
                else if(j>1 &&mat[i][j-1]==0 && mat[i][j]==mat[i][j-2]){//和右边第二个相等且中间那个为0
                    mat[i][j-2]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j+2];
                }
                else if(j>2 &&mat[i][j-1]==0 && mat[i][j-2]==0 && mat[i][j]==mat[i][j-3]){//和右边第二个相等且中间那个为0
                    mat[i][j-3]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i][j-3];
                }
            }
        }
    for(int i=0;i<4;i++)
        for(int j=3;j>=0;j--){
            if(mat[i][j]==0)
                continue;
            for(int j_change=3;j_change>j;){
                if(mat[i][j_change]!=0){
                    j_change--;
                    continue;
                }
                if(mat[i][j]!=0){
                    mat[i][j_change]=mat[i][j];
                    mat[i][j]=0;
                    j_change--;
                }
                if(j==0)
                    break;
                else{
                    j--;
                }
            }
        }
    if (flag==1 || flag==0)
        initial();
    cptChanged();

}



void matrice2048::Up()
{
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat_back[i][j]=mat[i][j];
    score_back=score;
    int flag=0;//判断矩阵有没有进行变化，1为变化，0为不变
    for(int j=0;j<4;j++)
        for(int i=0;i<4;i++){
            if(mat[i][j]!=0){
                if(i<3 && mat[i][j]==mat[i+1][j]){//和右边那个相等
                    mat[i+1][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i+1][j];
                }
                else if(i<2 &&mat[i+1][j]==0 && mat[i][j]==mat[i+2][j]){//和右边第二个相等且中间那个为0
                    mat[i+2][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i+2][j];
                }
                else if(i<1 &&mat[i+1][j]==0 && mat[i+2][j]==0 && mat[i][j]==mat[i+3][j]){//和右边第二个相等且中间那个为0
                    mat[i+3][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i+3][j];
                }
            }
        }
    for(int j=0;j<4;j++)
        for(int i=0;i<4;i++){
            if(mat[i][j]==0)
                continue;
            for(int i_change=0;i_change<i;){
                if(mat[i_change][j]!=0){
                    i_change++;
                    continue;
                }
                if(mat[i][j]!=0){
                    mat[i_change][j]=mat[i][j];
                    mat[i][j]=0;
                    i_change++;
                }
                if(i==3)
                    break;
                else{
                    i++;
                }
            }
        }
    if (flag==1 || flag==0)
        initial();
    cptChanged();

}

void matrice2048::Down()
{
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat_back[i][j]=mat[i][j];
    score_back=score;
    int flag=0;//判断矩阵有没有进行变化，1为变化，0为不变
    for(int j=0;j<4;j++)
        for(int i=3;i>=0;i--){
            if(mat[i][j]!=0){
                if(i>0 && mat[i][j]==mat[i-1][j]){//和右边那个相等
                    mat[i-1][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i-1][j];
                }
                else if(i>1 &&mat[i-1][j]==0 && mat[i][j]==mat[i-2][j]){//和右边第二个相等且中间那个为0
                    mat[i-2][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i-2][j];
                }
                else if(i>2 &&mat[i-1][j]==0 && mat[i-2][j]==0 && mat[i][j]==mat[i-3][j]){//和右边第二个相等且中间那个为0
                    mat[i-3][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i-3][j];
                }
            }
        }
    for(int j=0;j<4;j++)
        for(int i=3;i>=0;i--){
            if(mat[i][j]==0)
                continue;
            for(int i_change=3;i_change>i;){
                if(mat[i_change][j]!=0){
                    i_change--;
                    continue;
                }
                if(mat[i][j]!=0){
                    mat[i_change][j]=mat[i][j];
                    mat[i][j]=0;
                    i_change--;
                }
                if(i==0)
                    break;
                else{
                    i--;
                }
            }
        }
    if (flag==1 || flag==0)
        initial();
    cptChanged();

}

QList<QString> matrice2048::readMatrice()
{
    QList<QString> a;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            if(mat[i][j]==0)
                a.append(" ");
            else{
                a.append(QString::number(mat[i][j]));
            }
        }
    return a;
}

QList<QString> matrice2048::readCouleur()
{
    QList<QString> couleur;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            if(mat[i][j]==0)
                couleur.append("#ffffff");
            else if(mat[i][j]==2)
                couleur.append("#eee4da");
            else if(mat[i][j]==4)
                couleur.append("#ece0c8");
            else if(mat[i][j]==8)
                couleur.append("#f2b179");
            else if(mat[i][j]==16)
                couleur.append("#f59563");
            else if(mat[i][j]==32)
                couleur.append("#f57c5f");
            else if(mat[i][j]==64)
                couleur.append("#f65d3b");
            else if(mat[i][j]==128)
                couleur.append("#edce71");
            else if(mat[i][j]==256)
                couleur.append("#edcc61");
            else if(mat[i][j]==512)
                couleur.append("#ecc850");
            else if(mat[i][j]==1024)
                couleur.append("#edc53f");
            else if(mat[i][j]==2048)
                couleur.append("#F46060");
            else if(mat[i][j]==4096)
                couleur.append("#8a1a1a");
        }
    return couleur;
}

QString matrice2048::readScore()
{
    return QString::number(score);
}

QString matrice2048::readBest()
{
    if (best_score<score)
        best_score=score;
    return QString::number(best_score);
}

