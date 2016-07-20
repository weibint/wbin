import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;
public class DemoApp extends JFrame implements Runnable 
{
	private boolean isShow = false;
	private ColorPanel center = new ColorPanel();
	public DemoApp()
	{
		add(center, BorderLayout.CENTER);
		setSize(200, 100);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
		new Thread(this).start();
	}
	public static void main(String[] args) 
	{
		new DemoApp();
	}
	class ColorPanel extends JPanel 
	{
		@Override
			protected void paintComponent(Graphics g) 
			{
				lsuper.paintComponent(g);
	            Color defaultColor = g.getColor();
		        if (isShow) 
				{
					g.setColor(Color.YELLOW);
		            g.fillOval(100, 10, 50, 40);
		            g.setColor(defaultColor);
			        isShow = false;
				} 
				else 
				{
					isShow = true;
				}
			}
	}
	@Override 
		public void run() {
			while (true) 
			{
				try 
				{
					repaint();
					Thread.sleep(500);
				} 
				catch (Exception e) 
				{
				}
			}
		}
}
