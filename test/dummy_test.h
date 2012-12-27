// TODO: stub header
#ifndef __DUMMY_TEST_H__
#define __DUMMY_TEST_H__


void test_dummy_1(void);

int suite_dummy_init(void);
int suite_dummy_cleanup(void);

CU_TestInfo testcases_logging[] = {
  { "test_dummy_1", test_dummy_1 },
  CU_TEST_INFO_NULL,
};


#endif
