#pragma once

int NWD(int lhs, int rhs) {
    if (lhs < 0)
        lhs = lhs * (-1);
    else if (rhs < 0)
        rhs = rhs * (-1);

    //--------------------------------
    if (lhs == 0) {
        return rhs;
    } else if (rhs == 0) {
        return lhs;
    }
    //--------------------------------
    if (lhs == rhs) {
        return lhs;
    }
    //--------------------------------
    if (lhs > rhs) {
        return NWD(lhs - rhs, rhs);
    } else {
        return NWD(lhs, rhs - lhs);
    }
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    } else {
        auto result = lhs / NWD(lhs, rhs) * rhs;
        if (result < 0) {
            return (result * (-1));
        } else
            return result;
    }
}
