const vm = Vue.createApp({
  data() {
    return {
      firstName: "Jatin",
      middleName: "",
      lastName: "Koli",
      url: "https://www.instagram.com/jatin______10/",
      raw_url: '<a href="" target="_blank"></a>',
      age: 18,
    };
  },
  methods: {
    increment() {
      return this.age++;
    },
    updateLastName(msg, event) {
      console.log(msg);
      this.lastName = event.target.value;
    },
    updateMiddleName(event) {
      this.middleName = event.target.value;
    },
  },
  computed: {
    fullName() {
      console.log("Full name computed method was called!");

      return `${this.firstName} ${
        this.middleName
      } ${this.lastName.toUpperCase()}`;
    },
  },
  watch: {
    age(newVal, oldVal) {
      setTimeout(() => {
        this.age = 20;
      }, 3000);
    },
  },
}).mount("#app");

