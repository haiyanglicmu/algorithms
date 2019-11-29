//
// Created by Haiyang  Li on 11/28/19.
//

#include <vector>
#include "Permutations.hpp"

class Permutations::Impl {
public:
    static void permuteInternal(std::vector<int>& nums, int pos, std::vector<std::vector<int>>& ans) {
        if (pos == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = pos; i < nums.size(); ++i) {
            std::swap(nums[pos], nums[i]);
            permuteInternal(nums, pos + 1, ans);
            std::swap(nums[pos], nums[i]);
        }
    }
};

Permutations::Permutations() : pImpl { std::make_unique<Impl>() } { }

Permutations::~Permutations() = default;

std::vector<std::vector<int>> Permutations::permute(std::vector<int> &nums) {
    std::vector<std::vector<int>> ans;
    pImpl->permuteInternal(nums, 0, ans);
    return ans;
}
