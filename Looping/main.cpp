#include <QCoreApplication>
#include <QDebug>
#include <QString>

void printLStars(int L);

void print9Hello()
{
    qDebug() << "Hello from function print9Hello";

    for (int i=0; i<9; i++){
        printLStars(i);
    }
    qDebug() << "Exit from function print9Hello";
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    print9Hello();
    /*
    for (i=0, k = 20; i<23; i++, k--){
        for (k=10; k>2; k--) {
            qDebug() << "inner printI is: " << i << " K is:" << k;
         }
       qDebug() << "out print I is: " << i << " K is:" << k;
    }


    int s = 0;
    for (i=0; i<23; i++){
        for (k=0; k<10; k++) {
            s= i+k;
            QString message = "Summ of %1 + %2 = %3";
            qDebug() << message.arg(i).arg(k).arg(s);
            if (s>15) break;
        }
    }*/
    qDebug() << "End";
    return a.exec();
}

void printLStars(int L){
    QString qsOneRow;
    for (int i=0; i<L; i++){
        qsOneRow+='*';
    }
    qDebug() << qsOneRow;
}
