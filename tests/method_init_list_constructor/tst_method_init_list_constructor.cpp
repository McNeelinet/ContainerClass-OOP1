#include <QtTest>

// add necessary includes here

class method_init_list_constructor : public QObject
{
    Q_OBJECT

public:
    method_init_list_constructor();
    ~method_init_list_constructor();

private slots:
    void test_case1();

};

method_init_list_constructor::method_init_list_constructor()
{

}

method_init_list_constructor::~method_init_list_constructor()
{

}

void method_init_list_constructor::test_case1()
{

}

QTEST_APPLESS_MAIN(method_init_list_constructor)

#include "tst_method_init_list_constructor.moc"
