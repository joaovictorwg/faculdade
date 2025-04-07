# Carregar pacotes
library(ggplot2)
library(plotly)
library(htmlwidgets) # Para salvar gráficos interativos como HTML
library(GGally) # Para matriz de dispersão

# Carregar os dados
train_data <- read.csv("train_data.csv")
test_data <- read.csv("test_data.csv")

# Converter a variável diagnosis para fator
train_data$diagnosis <- as.factor(train_data$diagnosis)
test_data$diagnosis <- as.factor(test_data$diagnosis)

# Renomear os níveis da variável diagnosis
levels(train_data$diagnosis) <- c("Benigno", "Maligno")
levels(test_data$diagnosis) <- c("Benigno", "Maligno")

# Gráfico 1: Distribuição de uma variável por classe
grafico1 <- ggplot(train_data, aes(x = diagnosis, fill = diagnosis)) +
  geom_bar() +
  scale_fill_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  labs(
    title = "Distribuição das Classes",
    x = "Diagnóstico",
    y = "Contagem",
    fill = "Classe"
  ) +
  theme_minimal(base_size = 14) +
  theme(
    plot.title = element_text(hjust = 0.5, face = "bold"),
    legend.position = "top"
  )

# Tornar o gráfico 1 interativo e salvar como HTML
grafico1_interativo <- ggplotly(grafico1)
saveWidget(grafico1_interativo, "grafico1_interativo.html", selfcontained = TRUE)

# Gráfico 2: Scatter plot de duas variáveis
grafico2 <- ggplot(train_data, aes(x = mean_radius, y = mean_texture, color = diagnosis)) +
  geom_point(size = 3, alpha = 0.7) +
  scale_color_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  labs(
    title = "Relação entre Raio e Textura",
    x = "Raio Médio",
    y = "Textura Média",
    color = "Classe"
  ) +
  theme_minimal(base_size = 14) +
  theme(
    plot.title = element_text(hjust = 0.5, face = "bold"),
    legend.position = "top"
  )

# Tornar o gráfico 2 interativo e salvar como HTML
grafico2_interativo <- ggplotly(grafico2)
saveWidget(grafico2_interativo, "grafico2_interativo.html", selfcontained = TRUE)

# Gráfico 3: Boxplot para comparar uma variável contínua entre classes
grafico3 <- ggplot(train_data, aes(x = diagnosis, y = mean_radius, fill = diagnosis)) +
  geom_boxplot(outlier.color = "red", outlier.shape = 16, outlier.size = 2) +
  scale_fill_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  labs(
    title = "Distribuição do Raio Médio por Classe",
    x = "Diagnóstico",
    y = "Raio Médio",
    fill = "Classe"
  ) +
  theme_minimal(base_size = 14) +
  theme(
    plot.title = element_text(hjust = 0.5, face = "bold"),
    legend.position = "none"
  )

# Tornar o gráfico 3 interativo e salvar como HTML
grafico3_interativo <- ggplotly(grafico3)
saveWidget(grafico3_interativo, "grafico3_interativo.html", selfcontained = TRUE)

# Gráfico 4: Histograma
grafico4 <- ggplot(train_data, aes(x = mean_radius, fill = diagnosis)) +
  geom_histogram(binwidth = 1, alpha = 0.7, position = "identity") +
  scale_fill_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  labs(
    title = "Distribuição do Raio Médio",
    x = "Raio Médio",
    y = "Frequência",
    fill = "Classe"
  ) +
  theme_minimal()

# Tornar o gráfico 4 interativo e salvar como HTML
grafico4_interativo <- ggplotly(grafico4)
saveWidget(grafico4_interativo, "grafico4_interativo.html", selfcontained = TRUE)

# Gráfico 5: Densidade
grafico5 <- ggplot(train_data, aes(x = mean_radius, color = diagnosis, fill = diagnosis)) +
  geom_density(alpha = 0.3) +
  scale_color_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  scale_fill_manual(values = c("Benigno" = "#1f77b4", "Maligno" = "#ff7f0e")) +
  labs(
    title = "Densidade do Raio Médio por Classe",
    x = "Raio Médio",
    y = "Densidade",
    color = "Classe",
    fill = "Classe"
  ) +
  theme_minimal()

# Tornar o gráfico 5 interativo e salvar como HTML
grafico5_interativo <- ggplotly(grafico5)
saveWidget(grafico5_interativo, "grafico5_interativo.html", selfcontained = TRUE)

# Gráfico 6: Matriz de dispersão
grafico6 <- ggpairs(train_data[, c("mean_radius", "mean_texture", "mean_area", "diagnosis")],
                    aes(color = diagnosis, alpha = 0.7))

# Salvar gráficos estáticos no PDF
pdf("graficos_estaticos.pdf", width = 10, height = 7)

# Adicionar os gráficos estáticos ao PDF
print(grafico1)
print(grafico2)
print(grafico3)
print(grafico4)
print(grafico5)

# Fechar o dispositivo gráfico
dev.off()