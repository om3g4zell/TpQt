#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>

namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class. Provides the main view.
 */
class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		/**
		 * @brief Constructor
		 * @param parent the parent of the MainWindow
		 */
		explicit MainWindow(QWidget *parent = 0);

		/**
		 * @brief Destructor
		 */
		~MainWindow();

	private slots:
		/**
		 * @brief onCreateClientAction slot called when the user wants to create a new client.
		 */
		void onCreateClientAction();

		/**
		 * @brief onCreateStaffAction slot called when the user wants to create a new staff member.
		 */
		void onCreateStaffAction();

		/**
		 * @brief onAboutUsAction slot called when the user wants to display the about us window.
		 */
		void onAboutUsAction();

		/**
		 * @brief onAboutQtAction slot called when the user wants to display the about Qt window.
		 */
		void onAboutQtAction();

		/**
		 * @brief onModifyStaffButtonCliked slot called when the user wants to modify a staff member.
		 */
		void onModifyStaffButtonCliked();

		/**
		 * @brief onDeleteStaffButtonCliked slot called when the user wants to delete a staff member.
		 */
		void onDeleteStaffButtonCliked();

		/**
		 * @brief onClientSearch slot called when the user wants to updates the client's search.
		 */
		void onClientSearch();

        /**
         * @brief onModifyClientButtonClicked
         */
		void onModifyClientButtonClicked();

        /**
         * @brief onDeleteClientButtonClicked
         */
		void onDeleteClientButtonClicked();

        /**
         * @brief onClientAdded
         */
        void onClientAdded();

        /**
         * @brief onExportStaffToXMLPushButton
         */
        void onExportStaffToXMLPushButton();

        /**
         * @brief onDiversAction
         */
        void onDiversAction();

	private:
		// The user interface class.
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
