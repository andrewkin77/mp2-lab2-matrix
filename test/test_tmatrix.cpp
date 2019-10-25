#include "utmatrix.h"

#include <gtest.h>

TEST(TMatrix, can_create_matrix_with_positive_length)
{
  ASSERT_NO_THROW(TMatrix<int> m(5));
}

TEST(TMatrix, cant_create_too_large_matrix)
{
  ASSERT_ANY_THROW(TMatrix<int> m(MAX_MATRIX_SIZE + 1));
}

TEST(TMatrix, throws_when_create_matrix_with_negative_length)
{
  ASSERT_ANY_THROW(TMatrix<int> m(-5));
}

TEST(TMatrix, can_create_copied_matrix)
{
  TMatrix<int> m(5);

  ASSERT_NO_THROW(TMatrix<int> m1(m));
}

TEST(TMatrix, copied_matrix_is_equal_to_source_one)
{
	TMatrix<int> mt(5);
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = i; j < 5; j++)
		{
			mt[i][j] = i + j;
		}
	TMatrix<int> cpy(mt);
	EXPECT_EQ(mt, cpy);
}

TEST(TMatrix, copied_matrix_has_its_own_memory)
{
	TMatrix<int> mt(5);
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = i; j < 5; j++)
		{
			mt[i][j] = i + j;
		}
	TMatrix<int> cpy(mt);
	for (i = 0; i < 5; i++)
		for (j = i; j < 5; j++)
		{
			mt[i][j] = i - j;
		}
	EXPECT_NE(mt, cpy);
}

TEST(TMatrix, can_get_size)
{
	TMatrix<int> mt(5);
	ASSERT_NO_THROW(mt.GetSize());
	EXPECT_EQ(5, mt.GetSize());
}

TEST(TMatrix, can_set_and_get_element)
{
	TMatrix<int> mt(5);
	ASSERT_NO_THROW(mt[1][4] = 3);
	EXPECT_EQ(3, mt[1][4]);
}

TEST(TMatrix, throws_when_set_element_with_negative_index)
{
	TMatrix<int> mt(5);
	ASSERT_ANY_THROW(mt[1][-4] = 3);
}

TEST(TMatrix, throws_when_set_element_with_too_large_index)
{
	TMatrix<int> mt(5);
	ASSERT_ANY_THROW(mt[1][MAX_MATRIX_SIZE+1] = 3);
}

TEST(TMatrix, can_assign_matrix_to_itself)
{
	TMatrix<int> mt(5);
	ASSERT_NO_THROW(mt = mt);
}

TEST(TMatrix, can_assign_matrices_of_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, assign_operator_change_matrix_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_assign_matrices_of_different_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, compare_equal_matrices_return_true)
{
  ADD_FAILURE();
}

TEST(TMatrix, compare_matrix_with_itself_return_true)
{
  ADD_FAILURE();
}

TEST(TMatrix, matrices_with_different_size_are_not_equal)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_add_matrices_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, cant_add_matrices_with_not_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, can_subtract_matrices_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TMatrix, cant_subtract_matrixes_with_not_equal_size)
{
  ADD_FAILURE();
}

