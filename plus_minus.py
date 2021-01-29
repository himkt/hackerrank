#!/bin/python3


def plusMinus(arr):
    n_positives, n_negatives, n_zeros = 0, 0, 0
    for x in arr:
        if x == 0:
            n_zeros += 1
        elif x > 0:
            n_positives += 1
        elif x < 0:
            n_negatives += 1

    return n_positives / len(arr), n_negatives / len(arr), n_zeros / len(arr)


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))

    for ratio in plusMinus(arr):
        print(ratio)
