#pragma once

namespace SystemMonitor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pan_cpu;
	protected:
	private: System::Windows::Forms::Panel^ pan_mem;
	private: System::Windows::Forms::Panel^ pan_disk;
	private: System::Windows::Forms::Label^ lab_cpu;
	private: System::Windows::Forms::Label^ lab_mem;
	private: System::Windows::Forms::Label^ lab_disk;
	private: System::Windows::Forms::Label^ lab_cpu_L;
	private: System::Windows::Forms::Label^ lab_mem_L;
	private: System::Windows::Forms::Label^ lab_disk_L;
	private: System::Diagnostics::PerformanceCounter^ pc_cpu;
	private: System::Diagnostics::PerformanceCounter^ pc_mem;
	private: System::Diagnostics::PerformanceCounter^ pc_disk;
	private: System::Windows::Forms::NotifyIcon^ ni_taskbar;
	private: System::Windows::Forms::ContextMenuStrip^ cms_menu;
	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;



	private: System::Windows::Forms::Timer^ timer;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pan_cpu = (gcnew System::Windows::Forms::Panel());
			this->pan_mem = (gcnew System::Windows::Forms::Panel());
			this->pan_disk = (gcnew System::Windows::Forms::Panel());
			this->lab_cpu = (gcnew System::Windows::Forms::Label());
			this->lab_mem = (gcnew System::Windows::Forms::Label());
			this->lab_disk = (gcnew System::Windows::Forms::Label());
			this->lab_cpu_L = (gcnew System::Windows::Forms::Label());
			this->lab_mem_L = (gcnew System::Windows::Forms::Label());
			this->lab_disk_L = (gcnew System::Windows::Forms::Label());
			this->pc_cpu = (gcnew System::Diagnostics::PerformanceCounter());
			this->pc_mem = (gcnew System::Diagnostics::PerformanceCounter());
			this->pc_disk = (gcnew System::Diagnostics::PerformanceCounter());
			this->ni_taskbar = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->cms_menu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_cpu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_mem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_disk))->BeginInit();
			this->cms_menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// pan_cpu
			// 
			this->pan_cpu->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pan_cpu->Location = System::Drawing::Point(205, 33);
			this->pan_cpu->Name = L"pan_cpu";
			this->pan_cpu->Size = System::Drawing::Size(250, 101);
			this->pan_cpu->TabIndex = 0;
			this->pan_cpu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pan_cpu_Paint);
			// 
			// pan_mem
			// 
			this->pan_mem->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pan_mem->Location = System::Drawing::Point(205, 205);
			this->pan_mem->Name = L"pan_mem";
			this->pan_mem->Size = System::Drawing::Size(250, 101);
			this->pan_mem->TabIndex = 1;
			this->pan_mem->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pan_mem_Paint);
			// 
			// pan_disk
			// 
			this->pan_disk->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pan_disk->Location = System::Drawing::Point(205, 379);
			this->pan_disk->Name = L"pan_disk";
			this->pan_disk->Size = System::Drawing::Size(250, 101);
			this->pan_disk->TabIndex = 1;
			this->pan_disk->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pan_disk_Paint);
			// 
			// lab_cpu
			// 
			this->lab_cpu->AutoSize = true;
			this->lab_cpu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_cpu->Location = System::Drawing::Point(7, 68);
			this->lab_cpu->Name = L"lab_cpu";
			this->lab_cpu->Size = System::Drawing::Size(182, 62);
			this->lab_cpu->TabIndex = 2;
			this->lab_cpu->Text = L"Obci¹¿enie\r\nprocesora [%]";
			// 
			// lab_mem
			// 
			this->lab_mem->AutoSize = true;
			this->lab_mem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_mem->Location = System::Drawing::Point(7, 235);
			this->lab_mem->Name = L"lab_mem";
			this->lab_mem->Size = System::Drawing::Size(192, 62);
			this->lab_mem->TabIndex = 3;
			this->lab_mem->Text = L"Wykorzystanie\r\npamiêci [%]";
			// 
			// lab_disk
			// 
			this->lab_disk->AutoSize = true;
			this->lab_disk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_disk->Location = System::Drawing::Point(7, 421);
			this->lab_disk->Name = L"lab_disk";
			this->lab_disk->Size = System::Drawing::Size(192, 62);
			this->lab_disk->TabIndex = 4;
			this->lab_disk->Text = L"Wykorzystanie\r\ndysku [%]";
			// 
			// lab_cpu_L
			// 
			this->lab_cpu_L->AutoSize = true;
			this->lab_cpu_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_cpu_L->Location = System::Drawing::Point(461, 68);
			this->lab_cpu_L->Name = L"lab_cpu_L";
			this->lab_cpu_L->Size = System::Drawing::Size(29, 31);
			this->lab_cpu_L->TabIndex = 5;
			this->lab_cpu_L->Text = L"0";
			// 
			// lab_mem_L
			// 
			this->lab_mem_L->AutoSize = true;
			this->lab_mem_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_mem_L->Location = System::Drawing::Point(461, 235);
			this->lab_mem_L->Name = L"lab_mem_L";
			this->lab_mem_L->Size = System::Drawing::Size(29, 31);
			this->lab_mem_L->TabIndex = 6;
			this->lab_mem_L->Text = L"0";
			// 
			// lab_disk_L
			// 
			this->lab_disk_L->AutoSize = true;
			this->lab_disk_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lab_disk_L->Location = System::Drawing::Point(461, 421);
			this->lab_disk_L->Name = L"lab_disk_L";
			this->lab_disk_L->Size = System::Drawing::Size(29, 31);
			this->lab_disk_L->TabIndex = 7;
			this->lab_disk_L->Text = L"0";
			// 
			// pc_cpu
			// 
			this->pc_cpu->CategoryName = L"Procesor";
			this->pc_cpu->CounterName = L"Czas Procesora (%)";
			this->pc_cpu->InstanceName = L"_Total";
			// 
			// pc_mem
			// 
			this->pc_mem->CategoryName = L"Pamiêæ";
			this->pc_mem->CounterName = L"Zadeklarowane bajty w u¿yciu (%)";
			// 
			// pc_disk
			// 
			this->pc_disk->CategoryName = L"Dysk logiczny";
			this->pc_disk->CounterName = L"Czas dysku (%)";
			this->pc_disk->InstanceName = L"_Total";
			// 
			// ni_taskbar
			// 
			this->ni_taskbar->ContextMenuStrip = this->cms_menu;
			this->ni_taskbar->Text = L"notifyIcon1";
			this->ni_taskbar->Visible = true;
			// 
			// cms_menu
			// 
			this->cms_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3)
			{
				this->showToolStripMenuItem,
					this->hideToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->cms_menu->Name = L"cms_menu";
			this->cms_menu->Size = System::Drawing::Size(115, 70);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			this->showToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->showToolStripMenuItem->Text = L"Poka¿";
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showToolStripMenuItem_Click);
			// 
			// hideToolStripMenuItem
			// 
			this->hideToolStripMenuItem->Name = L"hideToolStripMenuItem";
			this->hideToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->hideToolStripMenuItem->Text = L"Ukryj";
			this->hideToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hideToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->exitToolStripMenuItem->Text = L"Wyjœcie";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 526);
			this->Controls->Add(this->lab_disk_L);
			this->Controls->Add(this->lab_mem_L);
			this->Controls->Add(this->lab_cpu_L);
			this->Controls->Add(this->lab_disk);
			this->Controls->Add(this->lab_mem);
			this->Controls->Add(this->lab_cpu);
			this->Controls->Add(this->pan_mem);
			this->Controls->Add(this->pan_disk);
			this->Controls->Add(this->pan_cpu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_cpu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_mem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc_disk))->EndInit();
			this->cms_menu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: System::Int32 x;
		public:array<System::Int32>^ Y1;
		public:array<System::Int32>^ Y2;
		public:array<System::Int32>^ Y3;
		private: System::Void showToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			timer->Enabled = true;
			this->Show();
		}
		private: System::Void hideToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			timer->Enabled = false;
		}
		private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Close();
		}
		private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e)
		{
			this->Show();
			timer->Enabled = true;
			x = 0;
			Y1 = gcnew array<System::Int32>(260);
			Y2 = gcnew array<System::Int32>(260);
			Y3 = gcnew array<System::Int32>(260);
		}
		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) 
		{
			lab_cpu_L->Text = pc_cpu->NextValue().ToString();
			lab_mem_L->Text = pc_mem->NextValue().ToString();
			lab_disk_L->Text = pc_disk->NextValue().ToString();
			DrawChart();
		}
		public:
			//Funkcja rysuj¹ca
			virtual void DrawChart();
		private: System::Void pan_cpu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			Pen^ linePen = gcnew Pen(System::Drawing::Color::Blue);
			if (x > 250)
			{
				x = 0;
				e->Graphics->Clear(System::Drawing::Color::White);
			}
			for (System::Int32 x1 = 1; x1 < x; x1++)
			{
				e->Graphics->DrawLine(linePen, x1 - 1, 100 - Y1[x1 - 1], x1, 100 - Y1[x1]);
			}
		}
		private: System::Void pan_mem_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
		{
			Pen^ linePen = gcnew Pen(System::Drawing::Color::Blue);
			if (x > 250)
			{
				x = 0;
				e->Graphics->Clear(System::Drawing::Color::White);
			}
			for (System::Int32 x1 = 1; x1 < x; x1++)
			{
				e->Graphics->DrawLine(linePen, x1 - 1, 100 - Y2[x1 - 1], x1, 100 - Y2[x1]);
			}
		}
		private: System::Void pan_disk_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			Pen^ linePen = gcnew Pen(System::Drawing::Color::Blue);
			if (x > 250)
			{
				x = 0;
				e->Graphics->Clear(System::Drawing::Color::White);
			}
			for (System::Int32 x1 = 1; x1 < x; x1++)
			{
				e->Graphics->DrawLine(linePen, x1 - 1, 100 - Y3[x1 - 1], x1, 100 - Y3[x1]);
			}
		}
};
}
//Funkcja rysuj¹ca
void SystemMonitor::MyForm::DrawChart()
{
	x++;
	System::Single YSingle;

	YSingle = Convert::ToSingle(lab_cpu_L->Text);
	Y1[x] = (System::Int32)YSingle;
	pan_cpu->Refresh();

	YSingle = Convert::ToSingle(lab_mem_L->Text);
	Y2[x] = (System::Int32)YSingle;
	pan_mem->Refresh();

	YSingle = Convert::ToSingle(lab_disk_L->Text);
	Y3[x] = (System::Int32)YSingle;
	pan_disk->Refresh();
}
