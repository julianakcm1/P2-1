graf<-read.table("~/Área\ de\ Trabalho/vitruvianzip/avl_ubt/R_graphics/avl_ubt_out", header = TRUE, sep = " ")
plot(graf$abb~graf$value, main="Árvore Balanceada X Árvore Desbalanceada", xlab="Valores", ylab="Comparações", col="blue")
points(graf$avl~graf$value, col="red")
