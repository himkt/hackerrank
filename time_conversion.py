

message = input()
h, m, s = map(int, message[:-2].split(":"))
suffix = message[-2:]

if suffix == "AM" and h == 12:
    h = 0
elif suffix == "PM" and h != 12:
    h += 12

print(f"{h:02d}:{m:02d}:{s:02d}")
