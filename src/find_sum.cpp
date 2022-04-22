#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {
    int left_point = 0;
    int right_point = static_cast<int>(data.size() - 1);

    while (left_point < right_point) {
      if (data[left_point] + data[right_point] == sum) {
        return std::make_pair(left_point, right_point);
      }
      if (data[left_point] + data[right_point] <sum) {
        left_point++;
      }
      else {
        right_point--;
      }
    }
    // Tips: для создания пары (pair) используйте функцию std::make_pair

    return std::nullopt;
  }
}  // namespace assignment