import axios from 'axios'

const API = axios.create({ baseURL: 'http://localhost:9320/'})


export const logIn = () => API.post('/user/login', );
export const signUp = () => API.post('/user/signup', );