#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <QRandomGenerator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> list;
    list.resize(10);
    std::fill(list.begin(), list.end(), 5);

    qInfo() << list;

    for(int i = 0; i< list.length(); i++) {
        list[i] = QRandomGenerator::global()->bounded(100);
    }

    std::sort(list.begin(), list.end());
    qInfo() << list;

    return a.exec();
}
