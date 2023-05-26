#include <QtTest>

// add necessary includes here

class method_default_constructor : public QObject
{
    Q_OBJECT

public:
    method_default_constructor();
    ~method_default_constructor();

private slots:
    void test_case1();

};

method_default_constructor::method_default_constructor()
{

}

method_default_constructor::~method_default_constructor()
{

}

void method_default_constructor::test_case1()
{

}

QTEST_APPLESS_MAIN(method_default_constructor)

#include "tst_method_default_constructor.moc"
