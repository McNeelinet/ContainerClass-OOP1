#include <QtTest>

#include "set.h"

class method_copy_constructor : public QObject
{
    Q_OBJECT

public:
    method_copy_constructor();
    ~method_copy_constructor();

private slots:
    void test_case1();

};

method_copy_constructor::method_copy_constructor()
{

}

method_copy_constructor::~method_copy_constructor()
{

}

void method_copy_constructor::test_case1()
{

}

QTEST_APPLESS_MAIN(method_copy_constructor)

#include "tst_method_copy_constructor.moc"
