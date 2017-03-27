#include "matrice2048.h"

matrice2048::matrice2048(QObject *parent) : QObject(parent)
{
    mat=new int*[4];
    for (int i=0;i<4;i++)
        mat[i]=new int[4];
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat[i][j]=0;
    score=0;
    best_score=0;
    initial();
}

void matrice2048::GameInitial(){
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            mat[i][j]=0;
    score=0;
    initial();
}

void matrice2048::initial()
{
    srand((int)time(NULL));
    int ran_num=rand()%16;//生成一个0到15之间到随机数
    while (mat[ran_num/4][ran_num%4] !=0)//如果这个位置不为0的话再生成一个
        ran_num=rand()%16;
    mat[ran_num/4][ran_num%4]=2;//在这个位置生成2
    cptChanged();
}

void matrice2048::Left()
{
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
                else if(j<1 &&mat[i+1][j]==0 && mat[i+2][j]==0 && mat[i][j]==mat[i+3][j]){//和右边第二个相等且中间那个为0
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
    int flag=0;//判断矩阵有没有进行变化，1为变化，0为不变
    for(int j=0;j<4;j++)
        for(int i=3;i>=0;i--){
            if(mat[i][j]!=0){
                if(j>0 && mat[i][j]==mat[i-1][j]){//和右边那个相等
                    mat[i-1][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i-1][j];
                }
                else if(j>1 &&mat[i-1][j]==0 && mat[i][j]==mat[i-2][j]){//和右边第二个相等且中间那个为0
                    mat[i-2][j]=2*mat[i][j];
                    mat[i][j]=0;
                    score+=mat[i+2][j];
                }
                else if(j>2 &&mat[i-1][j]==0 && mat[i-2][j]==0 && mat[i][j]==mat[i-3][j]){//和右边第二个相等且中间那个为0
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

QString matrice2048::readMatrice11()
{
    if(mat[0][0]!=0)//不为0的时候显示数值，为0的时候不显示
        return QString::number(mat[0][0]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice12()
{
    if(mat[0][1]!=0)
        return QString::number(mat[0][1]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice13()
{
    if(mat[0][2]!=0)
        return QString::number(mat[0][2]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice14()
{
    if(mat[0][3]!=0)
        return QString::number(mat[0][3]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice21()
{
    if(mat[1][0]!=0)
        return QString::number(mat[1][0]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice22()
{
    if(mat[1][1]!=0)
        return QString::number(mat[1][1]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice23()
{
    if(mat[1][2]!=0)
        return QString::number(mat[1][2]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice24()
{
    if(mat[1][3]!=0)
        return QString::number(mat[1][3]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice31()
{
    if(mat[2][0]!=0)
        return QString::number(mat[2][0]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice32()
{
    if(mat[2][1]!=0)
        return QString::number(mat[2][1]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice33()
{
    if(mat[2][2]!=0)
        return QString::number(mat[2][2]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice34()
{
    if(mat[2][3]!=0)
        return QString::number(mat[2][3]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice41()
{
    if(mat[3][0]!=0)
        return QString::number(mat[3][0]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice42()
{
    if(mat[3][1]!=0)
        return QString::number(mat[3][1]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice43()
{
    if(mat[3][2]!=0)
        return QString::number(mat[3][2]);
    else
        return QString(" ");
}

QString matrice2048::readMatrice44()
{
    if(mat[3][3]!=0)
        return QString::number(mat[3][3]);
    else
        return QString(" ");
}
