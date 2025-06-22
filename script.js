function startSolver() {
    const name = document.getElementById("playerName").value.trim();

    if (name === "") {
        alert("Please enter your name.");
        return;
    }

    // Save the name so it shows on solver page
    localStorage.setItem("playerName", name);
    localStorage.setItem("mode", "solver");

    // Optional: show welcome message (if you want to delay redirect)
    const msg = document.getElementById("welcomeMessage");
    msg.textContent = `Welcome, ${name}! Ready to solve Sudoku puzzles.`;
    msg.classList.add("show");

    // Redirect to solver after short delay
    setTimeout(() => {
        window.location.href = "game.html";
    }, 1000);
}

function startGame() {
    const name = document.getElementById("playerName").value.trim();

    if (name === "") {
        alert("Please enter your name.");
        return;
    }

    // Save the name so it shows on game page
    localStorage.setItem("playerName", name);
    localStorage.setItem("mode", "game");

    // Optional: show welcome message (if you want to delay redirect)
    const msg = document.getElementById("welcomeMessage");
    msg.textContent = `Welcome, ${name}! Get ready to play.`;
    msg.classList.add("show");

    // Redirect to game after short delay
    setTimeout(() => {
        window.location.href = "game.html";
    }, 1000);
}
