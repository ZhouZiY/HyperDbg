/**
 * @file main.cpp
 * @author Sina Karvandi (sina@hyperdbg.org)
 * @brief perform tests
 * @details
 * @version 0.11
 * @date 2024-08-11
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */
#include "pch.h"

/**
 * @brief Main function of test process
 *
 * @param argc
 * @param argv
 * @return int
 */
int
main(int argc, char * argv[])
{
    if (argc != 2)
    {
        printf("you should not test functionalities directly, instead use 'test all' "
               "command from HyperDbg...\n");
        return 1;
    }

    if (!strcmp(argv[1], "test-command-parser"))
    {
        //
        // # Test case 1
        // Testing command parser
        //
        if (TestCommandParser())
        {
            printf("\n[*] The main command parser test cases passed successfully\n");
        }
        else
        {
            printf("\n[*] The main command parser test cases failed\n");
        }
    }
    else
    {
        printf("unknown test case\n");
    }

    printf("\npress any key to exit...");

    _getch();

    return 0;
}
