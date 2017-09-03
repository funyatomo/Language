#!/usr/bin/python3

import sys
args = sys.argv
import math


def main():
    """
    docstring
    Here's an explanation.
    """

    val = 3 + 5j
    print(val.conjugate())
    # Comment out
    # Care about indent

    val = math.exp(2)
    print(val)

    val = math.log(2)
    print(val)

    val = math.sin(math.pi / 2)
    print(val)

    x = 0.1 * 3
    print(x)

    is_equal = (0.1 * 33 == 3.3)
    print(is_equal)

    # pass do nothing
    pass

if __name__ == "__main__":
    main()
