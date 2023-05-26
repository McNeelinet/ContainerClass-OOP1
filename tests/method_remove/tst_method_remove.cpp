#include <QtTest>

// add necessary includes here

class method_remove : public QObject
{
    Q_OBJECT

public:
    method_remove();
    ~method_remove();

private slots:
    void test_case1();

};

method_remove::method_remove()
{

}

method_remove::~method_remove()
{

}

void method_remove::test_case1()
{

}

QTEST_APPLESS_MAIN(method_remove)

#include "tst_method_remove.moc"
