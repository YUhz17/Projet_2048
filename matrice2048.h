#ifndef MATRICE2048_H
#define MATRICE2048_H

#include <QObject>

class matrice2048 : public QObject
{
    Q_OBJECT
public:
    explicit matrice2048(QObject *parent = 0);
    void initial();

    Q_PROPERTY(QString cptQML11 READ readMatrice11 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML12 READ readMatrice12 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML13 READ readMatrice13 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML14 READ readMatrice14 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML21 READ readMatrice21 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML22 READ readMatrice22 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML23 READ readMatrice23 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML24 READ readMatrice24 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML31 READ readMatrice31 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML32 READ readMatrice32 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML33 READ readMatrice33 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML34 READ readMatrice34 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML41 READ readMatrice41 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML42 READ readMatrice42 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML43 READ readMatrice43 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQML44 READ readMatrice44 NOTIFY cptChanged);
    Q_PROPERTY(QString cptQMLscore READ readScore NOTIFY cptChanged);
    Q_PROPERTY(QString cptQMLbest READ readBest NOTIFY cptChanged);


    QString readMatrice11();
    QString readMatrice12();
    QString readMatrice13();
    QString readMatrice14();
    QString readMatrice21();
    QString readMatrice22();
    QString readMatrice23();
    QString readMatrice24();
    QString readMatrice31();
    QString readMatrice32();
    QString readMatrice33();
    QString readMatrice34();
    QString readMatrice41();
    QString readMatrice42();
    QString readMatrice43();
    QString readMatrice44();
    QString readScore();
    QString readBest();

    Q_INVOKABLE void Left();
    Q_INVOKABLE void Right();
    Q_INVOKABLE void Up();
    Q_INVOKABLE void Down();
    Q_INVOKABLE void GameInitial();


signals:
    void cptChanged();

public slots:

private:
    int** mat;
    int score;
    int best_score;
};

#endif // MATRICE2048_H
