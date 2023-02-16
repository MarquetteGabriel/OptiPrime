/*
    Tests pour src/document/page.c
*/

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <unistd.h>
#include "cmocka/include/cmocka.h"

#include "src/document/page.c"

static int set_up(void **state)
{
    return 0;
}

static int tear_down(void **state)
{
    return 0;
}

/*
    Tests
*/
static void test_page_new(void **state)
{
    char file_name = "UnePage";
    Page_New(file_name);
    if(access("workspace/%s", file_name, F_OK) != -1)
    {
        assert_char_equal(file_name, file_name);
    }
}

static void test_page_delete(void *state)
{

}

/*
    Suites de Tests pour le module
*/
static const struct CMunitTest tests[]= 
{
    cmocka_unit_test(test_page_new),
    cmocka_unit_test(test_page_delete)
};

/*
    Lancement de la suite de tests
*/
int page_run_test()
{
    return(cmocka_run_group_tests_name("Test des fonctions d'une page", tests, set_up, tear_down));
}