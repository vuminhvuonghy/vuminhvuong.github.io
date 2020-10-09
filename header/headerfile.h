#include <iostream>
#include <fstream>
#include  <QObject>

using namespace std;

class baseClass: public QObject{
    Q_OBJECT
    Q_PROPERTY(int dataX READ getDataX WRITE setDataX NOTIFY dataXChanged)
    Q_PROPERTY(int dataY READ getDataY WRITE setDataY NOTIFY dataYChanged)
private:
    int dataX = 10;
    int dataY;
public:
    int getDataX();
    int getDataY();
    void setDataX(int data);
    void setDataY(int data);
signals:
    void dataXChanged();
    void dataYChanged();
};
