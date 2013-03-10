#include "minunit.h"

MU_TEST(test_test)
{
	mu_check(1 == 1);
}

MU_TEST_SUITE(cat_test_suite)
{
	MU_RUN_TEST(test_test);
}

int main()
{
	MU_RUN_SUITE(cat_test_suite);
	MU_REPORT();
	return 0;
}
