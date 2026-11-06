public class FindZero {
    public static void main(String[] args) {
        int[][] a = {
            {5, 3, 8},
            {2, 7, 0},
            {4, 0, 9}
        };

        int row = -1;
        int col = -1;

        outer:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    row = i;
                    col = j;
                    break outer;
                }
            }
        }

        if (row == -1) {
            System.out.println("Нулей в массиве нет");
        } else {
            System.out.println("Первый ноль: строка " + row + ", столбец " + col);
        }
    }
}
