#ifndef MODEL_H
#define MODEL_H
#include <QString>

class model
{
public:
    model();
    void setNum1(int num);
    void setNum2(int num);
    void setFlag(QString flag);
    QString doExpr();
private:
    int num1;
    int num2;
    QString flag;

};

#endif // MODEL_H
