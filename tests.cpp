#include "gtest/gtest.h"
#include "translate.h"


TEST(Task1Test, Zero) {
    EXPECT_EQ(translate(0), "sıfır");
}

TEST(Task1Test, Unit) {
    EXPECT_EQ(translate(1), "bir");
    EXPECT_EQ(translate(5), "beş");
    EXPECT_EQ(translate(9), "dokuz");
}

TEST(Task1Test, Tens) {
    EXPECT_EQ(translate(10), "on");
    EXPECT_EQ(translate(20), "yirmi");
    EXPECT_EQ(translate(40), "kırk");
    EXPECT_EQ(translate(70), "yetmiş");
    EXPECT_EQ(translate(90), "doksan");
}

TEST(Task1Test, CompoundNumbers) {
    EXPECT_EQ(translate(13), "on üç");
    EXPECT_EQ(translate(27), "yirmi yedi");
    EXPECT_EQ(translate(38), "otuz sekiz");
    EXPECT_EQ(translate(77), "yetmiş yedi");
    EXPECT_EQ(translate(94), "doksan dört");
}

TEST(Task1Test, NinetyNine) {
    EXPECT_EQ(translate(99), "doksan dokuz");
}

TEST(Task1Test, OutOfRange) {
    EXPECT_EQ(translate(100), "Недопустимое число (вне диапазона 0-99)");
    EXPECT_EQ(translate(-1), "Недопустимое число (вне диапазона 0-99)");
}
