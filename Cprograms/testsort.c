#include "SORT.H" 
#include "BDSCTEST.H"

main()
{
   
    START_TESTING("Selection Sort");

    TEST_CASE("Unsorted array");
    {
        int data[5];
        data[0] = 30; data[1] = 10; data[2] = 50; data[3] = 20; data[4] = 40;

        selsort(data, 5);

        ASSERT_EQU(data[0], 10);
        ASSERT_EQU(data[1], 20);
        ASSERT_EQU(data[2], 30);
        ASSERT_EQU(data[3], 40);
        ASSERT_EQU(data[4], 50);
    }

    TEST_CASE("Sorted array");
    {
        int data2[3];
        data2[0] = 1; data2[1] = 2; data2[2] = 3;
        
        selsort(data, 3);
        
        ASSERT_EQU(data2[0], 1);
        ASSERT_EQU(data2[2], 3);
    }

    END_TESTING();
}