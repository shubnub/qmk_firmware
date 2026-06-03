local qmk = require("qmk")
qmk.setup({
    name = "LAYOUT_sofle_rev1_grid",
    layout = {
        "x x x x x x _ _ _ x x x x x x",
        "x x x x x x _ _ _ x x x x x x",
        "x x x x x x _ _ _ x x x x x x",
        "x x x x x x x _ x x x x x x x",
        "_ _ x x x x x _ x x x x x _ _",
    },
    variant = "qmk",
})

-- qmk.format(138)
qmk.format(1)
