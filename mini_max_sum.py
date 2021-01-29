

def miniMaxSum(arr):
    arr = sorted(arr)
    ttl = sum(arr)
    return ttl-arr[-1], ttl-arr[0]


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    min, max = miniMaxSum(arr)
    print(f"{min} {max}")
