 class HelloWorld {
  public static void main(String args[]) {
    System.out.println("Hello World");
  }try {
Thread.sleep(5000);
} catch(InterruptedException ex) {
Thread.currentThread().interrupt();
}

}
