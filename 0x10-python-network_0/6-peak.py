#!/usr/bin/python3
def find_peak(list_of_integers):
    if not list_of_integers:
        return None

    def helper(nums, low, high):
        if low == high:
            return nums[low]

        mid = (low + high) // 2

        if nums[mid] > nums[mid + 1]:
            return helper(nums, low, mid)
        else:
            return helper(nums, mid + 1, high)

    return helper(list_of_integers, 0, len(list_of_integers) - 1)

