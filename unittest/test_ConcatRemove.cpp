

#include <assert.h>
#include "../concat.cpp"
#include "cpptest/cpptest.h"


using namespace std;

class ConcatTest: public Test::Suite
{
public:
    ConcatTest(){

		TEST_ADD(ConcatTest::blablabla_cde_8_test)        
    }    
private:
    void blablabla_cde_8_test(){
        TEST_ASSERT(1==1 )
    }
};

bool run_tests()
{
    Test::Suite ts;
    ts.add(unique_ptr<Test::Suite>(new ConcatTest));
    
    Test::TextOutput output(Test::TextOutput::Verbose);
    return ts.run(output);
}

