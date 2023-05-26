#include <QtTest>

// add necessary includes here

class method_set_substract : public QObject
{
    Q_OBJECT

public:
    method_set_substract();
    ~method_set_substract();

private slots:
    void test_case1();

};

method_set_substract::method_set_substract()
{

}

method_set_substract::~method_set_substract()
{

}

void method_set_substract::test_case1()
{

}

QTEST_APPLESS_MAIN(method_set_substract)

#include "tst_method_set_substract.moc"
