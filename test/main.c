#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/Automated.h>


// { Prototypes
void run_tests(void);
void generate_report(void);
// }


int main(int argc, char **argv) {
  // ==> Register test suites
  CU_pSuite suite = NULL; // Test suite container
  // TODO

  // ==> Run tests
  run_tests();
  generate_report();

  // ==> Clean up registry and return
  CU_cleanup_registry();
  return CU_get_error();
}

void run_tests() {
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  printf("\n");
  CU_basic_show_failures(CU_get_failure_list());
  printf("\n");
}
void generate_report() {
  CU_automated_run_tests();
  CU_list_tests_to_file();
}

// vim: set filetype=c:

