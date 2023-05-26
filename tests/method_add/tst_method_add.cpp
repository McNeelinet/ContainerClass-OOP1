#include <QtTest>

// add necessary includes here

class method_add : public QObject
{
    Q_OBJECT

public:
    method_add();
    ~method_add();

private slots:
    void test_case1();

};

method_add::method_add()
{

}

method_add::~method_add()
{

}

void method_add::test_case1()
{

}

QTEST_APPLESS_MAIN(method_add)

#include "tst_method_add.moc"
