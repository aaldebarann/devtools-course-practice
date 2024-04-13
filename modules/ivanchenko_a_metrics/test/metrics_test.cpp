#include <gtest/gtest.h>
#include "include/metrics.h"

TEST(ivanchenko_a_metrics, l1_zero_if_equal) {
    std::vector<float> v1, v2;
    size_t expected;

    v1 = {0.1, 0.2, 0.3};
    v2 = {0.1, 0.2, 0.3};

    expected = 0;
    
    EXPECT_EQ(expected, metrics::l1(v1, v2));
}
TEST(ivanchenko_a_metrics, l2_zero_if_equal) {
    std::vector<float> v1, v2;
    size_t expected;

    v1 = {0.1, 0.2, 0.3};
    v2 = {0.1, 0.2, 0.3};

    expected = 0;
    
    EXPECT_EQ(expected, metrics::l2(v1, v2));
}
TEST(ivanchenko_a_metrics, l3_zero_if_equal) {
    std::vector<float> v1, v2;
    size_t expected;

    v1 = {0.1, 0.2, 0.3};
    v2 = {0.1, 0.2, 0.3};

    expected = 0;
    
    EXPECT_EQ(expected, metrics::l3(v1, v2));
}
TEST(ivanchenko_a_metrics, l4_zero_if_equal) {
    std::vector<float> v1, v2;
    size_t expected;

    v1 = {0.1, 0.2, 0.3};
    v2 = {0.1, 0.2, 0.3};

    expected = 0;
    
    EXPECT_EQ(expected, metrics::l4(v1, v2));
}
TEST(ivanchenko_a_metrics, linf_zero_if_equal) {
    std::vector<float> v1, v2;
    size_t expected;

    v1 = {0.1, 0.2, 0.3};
    v2 = {0.1, 0.2, 0.3};

    expected = 0;
    
    EXPECT_EQ(expected, metrics::linf(v1, v2));
}