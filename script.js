let currentPlayer = "X";
let gameWon = false;

const cells = document.querySelectorAll(".cell");
cells.forEach(cell => cell.addEventListener("click", handleClick));

const resetBtn = document.querySelector("#reset-btn");
resetBtn.addEventListener("click", resetGame);

function handleClick(e) {
  if (e.target.textContent !== "" || gameWon) return;
  e.target.textContent = currentPlayer;
  checkWin();
  currentPlayer = currentPlayer === "X" ? "O" : "X";
}

function checkWin() {
  const winningCombinations = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
  ];
  for (let i = 0; i < winningCombinations.length; i++) {
    const [a, b, c] = winningCombinations[i];
    if (
      cells[a].textContent === currentPlayer &&
      cells[b].textContent === currentPlayer &&
      cells[c].textContent === currentPlayer
    ) {
      gameWon = true;
      alert(`Player ${currentPlayer} won!`);
    }
  }
}

function resetGame() {
  gameWon = false;
  currentPlayer = "X";
  cells.forEach(cell => (cell.textContent = ""));
}
