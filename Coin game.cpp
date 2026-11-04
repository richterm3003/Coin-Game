private int<list> coins;
private int index<list>;

int pickCoin() {
    value = 0;

    currentHighest = 0;
    for (int i = 0; i < coins.size(); i++) {
        value = coins[i] - coins[i - 1] - coins[i + 1];
        if (value > currentHighest && !banned.contains(i)) {
            currentHighest = value;
            int index = i;
        }
    }
    banned.add(index-1);
    banned.add(index+1);
    return index;
}

void skipTurn() {
    return;
}