#!/usr/bin/python3

import sys
args = sys.argv
import math
from decimal import Decimal


def main():
    """
    docstring
    Here's an explanation.
    """

    x = Decimal('0.1')
    print(x)

    Decimal('0.3')

    is_equal = (x * 33 == Decimal('3.3'))
    print(is_equal)

    # pass do nothing
    pass

if __name__ == "__main__":
    main()
