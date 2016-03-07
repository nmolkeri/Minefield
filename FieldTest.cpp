/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"

using namespace std;
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
    minefield.placeMine(1,1);
    minefield.placeMine(7,7);
    minefield.placeMine(8,8);
    minefield.placeMine(9,9);
    minefield.placeMine(10,10);
    
    if(minefield.isSafe(4,5))
    {
        cout<<"Mine found"<<endl;
        
    }
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5));
    ASSERT_EQ( MINE_HIDDEN, minefield.get(8,7));
    ASSERT_EQ( MINE_HIDDEN, minefield.get(7,7));
    ASSERT_EQ( MINE_HIDDEN, minefield.get(8,8));
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9,9));


    
}

