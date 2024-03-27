#!/usr/bin/python3
def find_peak(list_of_integers):
    """Finds a peak in list_of_integers"""

    if list_of_integers is None or list_of_integers == []:
        return None

    lo = 0
    hi = len(list_of_integers) - 1  # Subtract 1 to adjust for 0-based indexing

    while lo < hi:
        mid = (lo + hi) // 2

        if list_of_integers[mid] < list_of_integers[mid + 1]:
            lo = mid + 1
        else:
            hi = mid

    return list_of_integers[lo]

