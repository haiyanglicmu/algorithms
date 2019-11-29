//
// Created by Haiyang  Li on 11/28/19.
//

#ifndef ALGORITHMS_PERMUTATIONS_HPP
#define ALGORITHMS_PERMUTATIONS_HPP


#include <vector>

class Permutations {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);
    Permutations();
    ~Permutations();
private:
    class Impl;
    std::unique_ptr<Impl> pImpl;
};

#endif //ALGORITHMS_PERMUTATIONS_HPP
