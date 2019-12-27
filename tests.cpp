#include "gtest/gtest.h"
#include "lib.h"

TEST(arr_sum,first){
int *p=new int[3];
p[0]=20;
p[1]=-15;
p[2]=5;
  EXPECT_EQ(10, array_sum(p,3));
}

TEST(arr_sum,second){
  int *p=new int[6];
  p[0]=-110;
  p[1]=-15;
  p[2]=5;
  p[3]=20;
  p[4]=-17;
  p[5]=3;
  EXPECT_EQ(-114, array_sum(p,6));
}

TEST(arr_sum,third) {
  int *p = new int[2];
  p[0] = 317;
  p[1] = -315;
  EXPECT_EQ(2, array_sum(p,2));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}