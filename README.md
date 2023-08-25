# Data Preprocessing for Weather Forecasting

This repository demonstrates how to preprocess weather forecast data before using it to train machine learning models. The code provided here focuses on data preprocessing steps such as handling missing values, outlier removal, and feature engineering.

## Dataset

The weather forecast data is loaded from a CSV file named "kecamatanforecast-jawa.csv". The dataset includes information about various weather parameters, such as temperature, relative humidity, wind speed, and weather code.

## Data Preprocessing Steps

1. Loading and Filtering Data: The dataset is loaded using pandas, and specific columns related to temperature, relative humidity, wind speed, and weather code are selected for further analysis.

2. Handling Missing Values: Any rows with missing values are dropped from the dataset to ensure data quality.

3. Outlier Removal: Outliers are identified using the mean and standard deviation of each feature. Rows containing outliers are removed from the dataset.

4. Feature Engineering: The "Kode cuaca" column is transformed into a new "Cuaca" column that represents three classes: "Cerah," "Hujan," and "Berawan."

5. Train-Test Split: The preprocessed dataset is split into training and testing sets for model evaluation.

## Model Evaluation

Several machine learning models are evaluated on the preprocessed data:

- Linear Regression
- Support Vector Machine (SVM)
- Decision Tree
- Gradient Boosting
- Random Forest

The accuracy of each model is measured and compared using bar plots.

## Getting Started

1. Download the "kecamatanforecast-jawa.csv" dataset and save it to the appropriate location.

2. Open the provided Jupyter Notebook.

3. Run the notebook cells to perform data preprocessing and model evaluation.

4. Observe the accuracy comparison among different models using the generated bar plots.


## Acknowledgements

The weather forecast data is used for demonstration purposes only. The preprocessing steps and models evaluated can be customized based on specific requirements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.