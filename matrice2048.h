#ifndef MATRICE2048_H
#define MATRICE2048_H

#include <QObject>
#include<QList>

class matrice2048 : public QObject
{
    Q_OBJECT
public:
    explicit matrice2048(QObject *parent = 0);
    void initial();


    Q_PROPERTY(QString cptQMLscore READ readScore() NOTIFY cptChanged);
    Q_PROPERTY(QString cptQMLbest READ readBest() NOTIFY cptChanged);
    Q_PROPERTY(bool cptQMLGameOver READ IsGameOver() NOTIFY cptChanged);
    Q_PROPERTY(QList<QString> cptQMLcouleur READ readCouleur() NOTIFY cptChanged);
    Q_PROPERTY(QList<QString> cptQML READ readMatrice() NOTIFY cptChanged);

    QList<QString> readMatrice();
    QList<QString> readCouleur();

    QString readScore();
    QString readBest();
    bool IsGameOver();
    bool ismatricefull();

    Q_INVOKABLE void Left();
    Q_INVOKABLE void Right();
    Q_INVOKABLE void Up();
    Q_INVOKABLE void Down();
    Q_INVOKABLE void GameInitial();
    Q_INVOKABLE void GetBack();


signals:
    void cptChanged();

public slots:

private:
    int** mat;
    int** mat_back;
    int score;
    int score_back;
    int best_score;
    bool game_over;
};

#endif // MATRICE2048_H
