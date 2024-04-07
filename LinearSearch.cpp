#include "LinearSearch.h"

// Definition of the last_occurrence function template
template <typename Item_Type>
int last_occurrence(const std::vector<Item_Type>& items, const Item_Type& target) {
    int pos_last = items.size() - 1;
    while (pos_last >= 0) {
        if (items[pos_last] == target)
            return pos_last;
        pos_last--;
    }
    return -1;
}

// Explicit instantiation for int
template int last_occurrence(const std::vector<int>& items, const int& target);
