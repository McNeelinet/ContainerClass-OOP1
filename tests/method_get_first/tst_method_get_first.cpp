#include <QtTest>

// add necessary includes here

class method_get_first : public QObject
{
    Q_OBJECT

public:
    method_get_first();
    ~method_get_first();

private slots:
    void test_case1();

};

method_get_first::method_get_first()
{

}

method_get_first::~method_get_first()
{

}

void method_get_first::test_case1()
{

}

QTEST_APPLESS_MAIN(method_get_first)

#include "tst_method_get_first.moc"
