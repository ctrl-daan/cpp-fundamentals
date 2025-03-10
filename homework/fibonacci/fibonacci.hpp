#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence <= 1) {
        return sequence;
    }

    int previous1 = 1, previous2 = 0;
    int current{};
    for (int i = 2; i <= sequence; i++) {
        current = previous1 + previous2;
        previous2 = previous1;
        previous1 = current;
    }
    return current;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    } else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
