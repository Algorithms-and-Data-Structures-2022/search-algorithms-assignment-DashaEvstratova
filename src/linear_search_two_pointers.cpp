#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {
    int left_point = 0, right_point = static_cast<int>(data.size() - 1);
    while (left_point <= right_point) {
      if (data[left_point] == search_element) {
        return left_point;
      }
      if (data[right_point] == search_element) {
        return right_point;
      }
      right_point--;
      left_point++;
    }
    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    return std::nullopt;
  }

}  // namespace assignment