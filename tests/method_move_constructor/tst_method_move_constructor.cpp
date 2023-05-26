#include <QtTest>

// add necessary includes here

class method_move_constructor : public QObject
{
    Q_OBJECT

public:
    method_move_constructor();
    ~method_move_constructor();

private slots:
    void test_case1();

};

method_move_constructor::method_move_constructor()
{

}

method_move_constructor::~method_move_constructor()
{

}

void method_move_constructor::test_case1()
{

}

QTEST_APPLESS_MAIN(method_move_constructor)

#include "tst_method_move_constructor.moc"
